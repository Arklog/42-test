CPPFLAGS=g++ -Werror -Wall -Wextra -I. -I${GIT}
INCLUDES=-L. -lgtest -lpthread

test:
	git submodule add ${GIT}
	${CPPFLAGS} ${SUBJECT} ${INCLUDE}
	shell ./a.out
	clean

clean:
	find . \(-name '*.o' -name ${GIT} -name '.gitmodules'} -delete
