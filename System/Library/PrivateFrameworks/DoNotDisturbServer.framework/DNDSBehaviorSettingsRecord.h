/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/NSCopying.h>
#import <DoNotDisturbServer/NSMutableCopying.h>
#import <DoNotDisturbServer/DNDSBackingStoreRecord.h>

@class NSNumber, NSString;

@interface DNDSBehaviorSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord> {

	NSNumber* _interruptionBehaviorSetting;

}

@property (nonatomic,copy,readonly) NSNumber * interruptionBehaviorSetting;              //@synthesize interruptionBehaviorSetting=_interruptionBehaviorSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithDictionaryRepresentation:(id)arg1 ;
+(id)_recordWithEncodedInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)dictionaryRepresentation;
-(NSNumber *)interruptionBehaviorSetting;
-(id)_initWithInterruptionBehaviorSetting:(id)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
@end
