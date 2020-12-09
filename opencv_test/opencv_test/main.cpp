//These codes can help you read image with OpenCV

#include <opencv2/core.hpp> //define the basic building blocks of the library
#include <opencv2/imgcodecs.hpp> // provides functions for reading and writing
#include <opencv2/highgui.hpp> //contains the functions to show an image in a window

#include <iostream>

using namespace cv; //By declaring using namespace cv;, in the following, the library functions can be accessed without explicitly stating the namespace.

int main()
{
   std::string image_path = samples::findFile("yourimagepath.jpg");
     Mat img = imread(image_path, IMREAD_COLOR);

   if(img.empty())
    {
        std::cout << "Could not read the image: "<< image_path << std::endl;
        return 1;
    }
    
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window

    if(k== 's')
    {
        imwrite("yourimagepath.jpg",img);
    }

    return 0;
}
