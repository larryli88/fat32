// test.cpp: �������̨Ӧ�ó������ڵ㡣
//

   
#include "gtest\gtest.h"    
extern "C" {
#include "fat32.h"
}

unsigned char out[512];
TEST(fun, subtraction)
{
	EXPECT_EQ(512, ReadSector(out, 0, 512)) << "error!";
}

int _tmain(int argc, CHAR* argv[])
{
	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();

}
