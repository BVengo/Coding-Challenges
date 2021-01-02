library(rvest)
library(magrittr)
library(data.table)

base.url <- 'https://open.kattis.com/problems?page='
page <- 0

links <- data.table(V1=numeric())

while(TRUE) {
  curr.links <- 
      as.data.table(
      read_html(paste0(base.url, page)) %>%
      html_nodes('[class="name_column"]') %>%
      html_nodes('a') %>%
      html_attr("href"))
  
  if(!nrow(curr.links)) {
    break
  }
  
  curr.links[, V1 := paste0(gsub('/problems/', '', V1), ".cpp")]
  
  links <- rbind(links, curr.links)
  
  page <- page + 1
}

for(problem in links$V1) {
  if(file.exists(paste0("../complete/", problem)) || file.exists(paste0("../incomplete/", problem))) {
    next
  }
  
  file.copy("../template.cpp", "../incomplete/")
  file.rename("../incomplete/template.cpp", paste0("../incomplete/", problem))
}
