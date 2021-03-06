/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSProcessExecutionProvisionDelegate.h>
#import <FrontBoardServices/BSDescriptionProviding.h>

@protocol FBSProcessInternal;
@class NSString, FBSProcessWatchdogPolicy;

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcessInternal> _process;
	FBSProcessWatchdogPolicy* _policy;
	BOOL _active;
	BOOL _invalidated;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                       //@synthesize process=_process - In the implementation block
@property (nonatomic,copy,readonly) FBSProcessWatchdogPolicy * policy;              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id<FBSProcess>)process;
-(void)activate;
-(void)_beginMonitoringConstraints;
-(void)_stopMonitoringConstraints;
-(void)deactivate;
-(void)provision:(id)arg1 wasViolatedWithError:(id)arg2 ;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(FBSProcessWatchdogPolicy *)policy;
@end

