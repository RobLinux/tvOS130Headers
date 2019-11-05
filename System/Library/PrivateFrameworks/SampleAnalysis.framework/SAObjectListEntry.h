/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SASerializable;
@interface SAObjectListEntry : NSObject {

	id<SASerializable> _instance;
	unsigned long long _size;

}

@property (retain) id<SASerializable> instance;              //@synthesize instance=_instance - In the implementation block
@property (assign) unsigned long long size;                  //@synthesize size=_size - In the implementation block
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(id<SASerializable>)instance;
-(void)setInstance:(id<SASerializable>)arg1 ;
@end

