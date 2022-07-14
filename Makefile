FOLDER=$(shell echo ${GIT} | tr '/' ' ' | awk '{print $$(NF)}')
CPPFLAGS=g++ -Werror -Wall -Wextra -I. -I${FOLDER}
INCLUDES=-L. -lgtest -lpthread

all: | compile clean

compile:
	-git submodule add -f ${GIT} 
	-cd ${FOLDER}
	-git checkout master
	-git pull
	-cd ..
	-${CPPFLAGS} ${SUBJECT}.cpp ${INCLUDES}
	-./a.out

clean:
	@-rm -f a.out
	@-git rm --cached -f ${FOLDER} 2>>/dev/null || true
