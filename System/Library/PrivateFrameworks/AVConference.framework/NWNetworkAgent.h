/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSUUID;


@protocol NWNetworkAgent
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@property (assign,nonatomic) BOOL supportsBrowseRequests; 
@property (assign,nonatomic) BOOL supportsResolveRequests; 
@property (assign,nonatomic) BOOL requiresAssert; 
@property (assign,nonatomic) BOOL updateClientsImmediately; 
@optional
-(void)setSupportsBrowseRequests:(BOOL)arg1;
-(BOOL)supportsBrowseRequests;
-(BOOL)startAgentWithOptions:(id)arg1;
-(BOOL)assertAgentWithOptions:(id)arg1;
-(void)unassertAgentWithOptions:(id)arg1;
-(BOOL)requestNexusWithOptions:(id)arg1;
-(void)closeNexusWithOptions:(id)arg1;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1;
-(BOOL)isNetworkProvider;
-(void)setNetworkProvider:(BOOL)arg1;
-(BOOL)isNexusProvider;
-(void)setNexusProvider:(BOOL)arg1;
-(BOOL)supportsResolveRequests;
-(void)setSupportsResolveRequests:(BOOL)arg1;
-(BOOL)requiresAssert;
-(void)setRequiresAssert:(BOOL)arg1;
-(BOOL)updateClientsImmediately;
-(void)setUpdateClientsImmediately:(BOOL)arg1;

@required
+(id)agentType;
+(id)agentDomain;
+(id)agentFromData:(id)arg1;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(NSUUID *)agentUUID;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(id)arg1;
-(void)setAgentUUID:(id)arg1;
-(BOOL)isKernelActivated;
-(void)setKernelActivated:(BOOL)arg1;
-(BOOL)isUserActivated;
-(void)setUserActivated:(BOOL)arg1;
-(BOOL)isVoluntary;
-(void)setVoluntary:(BOOL)arg1;

@end

