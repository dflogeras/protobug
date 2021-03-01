PROJECT( tester )
ADD_EXECUTABLE( tester main.cpp poc.pb.cc )
TARGET_LINK_LIBRARIES( tester protobuf-lite )
