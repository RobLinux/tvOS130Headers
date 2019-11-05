/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/NSSecureCoding.h>
#import <BackBoardServices/BSDescriptionProviding.h>
#import <BackBoardServices/NSCopying.h>

@class NSString;

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {

	unsigned _hidEventType;

}

@property (nonatomic,readonly) unsigned hidEventType;               //@synthesize hidEventType=_hidEventType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)descriptorForHIDEvent:(IOHIDEventRef)arg1 ;
+(id)descriptorWithEventType:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)describes:(id)arg1 ;
-(id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1 ;
-(BOOL)matchesHIDEvent:(IOHIDEventRef)arg1 ;
-(id)initWithEventType:(unsigned)arg1 ;
-(unsigned)hidEventType;
@end

