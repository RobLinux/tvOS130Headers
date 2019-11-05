/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/NSCopying.h>
#import <DoNotDisturb/NSSecureCoding.h>

@class NSArray;

@interface DNDState : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _suppressionState;
	NSArray* _activeModeAssertionMetadata;

}

@property (nonatomic,readonly) BOOL willSuppressInterruptions; 
@property (nonatomic,copy,readonly) NSArray * activeModeIdentifiers; 
@property (nonatomic,readonly) unsigned long long suppressionState;                     //@synthesize suppressionState=_suppressionState - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeModeAssertionMetadata;              //@synthesize activeModeAssertionMetadata=_activeModeAssertionMetadata - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(unsigned long long)suppressionState;
-(NSArray *)activeModeAssertionMetadata;
-(id)initWithSuppressionState:(unsigned long long)arg1 activeModeAssertionMetadata:(id)arg2 ;
-(BOOL)willSuppressInterruptions;
-(NSArray *)activeModeIdentifiers;
@end
