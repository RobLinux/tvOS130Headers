/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/BSXPCSecureCoding.h>
#import <RunningBoardServices/RBSProcessMatching.h>
#import <RunningBoardServices/NSCopying.h>

@class RBSProcessIdentifier, RBSProcessIdentity, NSString;

@interface RBSTarget : NSObject <BSXPCSecureCoding, RBSProcessMatching, NSCopying> {

	RBSProcessIdentifier* _processIdentifier;
	RBSProcessIdentity* _processIdentity;
	NSString* _environment;
	NSString* _picoDesc;

}

@property (getter=isSystem,nonatomic,readonly) BOOL system; 
@property (nonatomic,readonly) RBSProcessIdentifier * processIdentifier;              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * processIdentity;                  //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * environment;                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * picoDesc;                                   //@synthesize picoDesc=_picoDesc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)currentProcess;
+(id)targetWithPid:(int)arg1 environmentIdentifier:(id)arg2 ;
+(id)targetWithProcessIdentifier:(id)arg1 ;
+(id)targetWithProcessIdentity:(id)arg1 ;
+(id)targetWithPid:(int)arg1 ;
+(id)systemTarget;
+(id)targetWithProcessIdentity:(id)arg1 environmentIdentifier:(id)arg2 ;
+(id)targetWithProcessIdentifier:(id)arg1 environmentIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(unsigned)euid;
-(RBSProcessIdentifier *)processIdentifier;
-(NSString *)environment;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSString *)picoDesc;
-(RBSProcessIdentity *)processIdentity;
-(BOOL)isSystem;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)processPredicate;
-(id)copyWithEuid:(unsigned)arg1 ;
-(id)_initWithProcessIdentifier:(id)arg1 processIdentity:(id)arg2 environmentIdentifier:(id)arg3 euid:(unsigned)arg4 ;
@end

