/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMAccessory, NSData;

@interface CUHomeKitResolvableAccessory : NSObject {

	HMAccessory* _accessory;
	NSData* _irkData;

}

@property (nonatomic,retain) HMAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSData * irkData;                     //@synthesize irkData=_irkData - In the implementation block
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(NSData *)irkData;
-(void)setIrkData:(NSData *)arg1 ;
@end

