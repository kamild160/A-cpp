////
//////
////// Created by Kamil Dłutowski on 12/11/2018.
//////
#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "klasy.h"

using testing::Eq;

namespace {
    class Kwadratt: public testing::Test{
    public:
        Kwadrat a_obj= Kwadrat(2,5,2);
        Kwadrat b_obj= Kwadrat(2,4,2);
        Kwadrat c_obj= Kwadrat(2,0,2);
        myexception myexc;
        Kwadratt(){
            a_obj, b_obj, c_obj;

        }


    };
}
TEST_F(Kwadratt,test1){



    ASSERT_EQ(a_obj.miejscezerowe(0,myexc),-0.5);
    ASSERT_EQ(a_obj.miejscezerowe(1,myexc),-2);

}

TEST_F(Kwadratt,test2){



    ASSERT_EQ(b_obj.miejscezerowe(0,myexc),-1);

}
//TEST_F(Kwadratt,test3){
//
//
//    ASSERT_EQ(c_obj.miejscezerowe(0,myexc),);
//
//}


