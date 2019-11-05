/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HomeKitDaemon/NSCopying.h>

@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying> {

	unsigned long long _value;

}

@property (readonly) unsigned long long value;                   //@synthesize value=_value - In the implementation block
@property (getter=isInitial,readonly) BOOL initial; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(id)initWithValue:(unsigned long long)arg1 ;
-(BOOL)isInitial;
-(id)attributeDescriptions;
-(id)initWithStreamDataDictionary:(id)arg1 ;
@end
