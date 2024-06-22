#Sciter SDK destination
SCITER_DIR=/sdk/sciter-js-sdk/include/

run:
#compile resources
	/sdk/sciter-js-sdk/bin/linux/packfolder ui resources.cpp -v "resources" 
#compile code
	g++ main.cpp -o output/main -I$(SCITER_DIR) `pkg-config --cflags --libs gtk+-3.0`
#run code
	output/main