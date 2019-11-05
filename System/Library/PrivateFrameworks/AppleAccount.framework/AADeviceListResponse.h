/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface AADeviceListResponse : AAResponse {

	NSArray* _devices;

}

@property (nonatomic,readonly) NSArray * devices;              //@synthesize devices=_devices - In the implementation block
-(NSArray *)devices;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end
