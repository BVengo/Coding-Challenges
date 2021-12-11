#################################
# Working directory is 'Kattis'
#################################
packages <- c("rvest", "magrittr", "data.table")
install.packages(setdiff(packages, rownames(installed.packages())))

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
  
  curr.links[, V1 := gsub('/problems/', '', V1)]
  
  links <- rbind(links, curr.links)
  
  page <- page + 1
}

for(problem in links$V1) {
  if(file.exists(paste0("src/complete/", problem)) || file.exists(paste0("src/incomplete/", problem))) {
    next
  }
  
  file.copy("src/template.cpp", "src/incomplete/")
  file.rename("src/incomplete/template.cpp", paste0("src/incomplete/", problem, '.cpp'))
}