/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/RBSProcessIdentifier.h>
#import <BaseBoard/BSDescriptionProviding.h>
#import <BaseBoard/BSXPCCoding.h>
#import <BaseBoard/NSSecureCoding.h>

@class NSString, BSMachPortTaskNameRight, BSAuditToken;

@interface BSProcessHandle : NSObject <RBSProcessIdentifier, BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {

	int _pid;
	NSString* _name;
	NSString* _bundleID;
	NSString* _jobLabel;
	NSString* _bundlePath;
	BSMachPortTaskNameRight* _taskNameRight;
	BSAuditToken* _auditToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,copy) NSString * jobLabel;                                      //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                    //@synthesize bundlePath=_bundlePath - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) int pid;                                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken;                            //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)processHandle;
+(id)processHandleForXPCConnection:(id)arg1 ;
+(id)processHandleForPID:(int)arg1 bundleID:(id)arg2 ;
+(id)processHandleForAuditToken:(id)arg1 ;
+(id)processHandleForNSXPCConnection:(id)arg1 ;
+(id)processHandleForPID:(int)arg1 ;
+(id)processHandleForTaskNameRight:(id)arg1 ;
-(int)rbs_pid;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)processPredicate;
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BSAuditToken *)auditToken;
-(NSString *)bundlePath;
-(id)valueForEntitlement:(id)arg1 ;
-(int)pid;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(id)initWithTaskNameRight:(id)arg1 ;
-(id)initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(id)initWithCurrentProcess;
-(id)_initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(BOOL)_isRunningWithCertainty:(out BOOL*)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)jobLabel;
-(void)setJobLabel:(NSString *)arg1 ;
-(BSMachPortTaskNameRight *)taskNameRight;
-(void)setBundlePath:(NSString *)arg1 ;
@end
