/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <HomeKitDaemon/HMDTLVCreateParse.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@interface HMDStreamingStatus : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	unsigned long long _streamingStatus;

}

@property (nonatomic,readonly) unsigned long long streamingStatus;              //@synthesize streamingStatus=_streamingStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)streamingStatus;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
@end

