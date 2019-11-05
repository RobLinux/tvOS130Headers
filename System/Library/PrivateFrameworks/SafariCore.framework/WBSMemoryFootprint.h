/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <SafariCore/NSSecureCoding.h>

@class NSArray, WBSMemoryFootprintMallocZone;

@interface WBSMemoryFootprint : NSObject <NSSecureCoding> {

	task_vm_info _vmInfo;
	NSArray* _zones;

}

@property (nonatomic,readonly) NSArray * zones;                                               //@synthesize zones=_zones - In the implementation block
@property (nonatomic,readonly) unsigned long long residentSize; 
@property (nonatomic,readonly) unsigned long long dirtySize; 
@property (nonatomic,readonly) WBSMemoryFootprintMallocZone * defaultMallocZone; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(id)initWithError:(id*)arg1 ;
-(NSArray *)zones;
-(WBSMemoryFootprintMallocZone *)defaultMallocZone;
@end
