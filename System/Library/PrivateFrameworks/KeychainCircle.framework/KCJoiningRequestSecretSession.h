/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KCJoiningRequestSecretDelegate;
#import <KeychainCircle/KeychainCircle-Structs.h>
@class KCAESGCMDuplexSession, NSObject, KCSRPClientContext, NSString, NSData, OTJoiningConfiguration, OTControl, NSMutableDictionary;

@interface KCJoiningRequestSecretSession : NSObject {

	int _state;
	KCAESGCMDuplexSession* _session;
	NSObject*<KCJoiningRequestSecretDelegate> _secretDelegate;
	KCSRPClientContext* _context;
	unsigned long long _dsid;
	NSString* _piggy_uuid;
	unsigned long long _piggy_version;
	unsigned long long _epoch;
	NSData* _challenge;
	NSData* _salt;
	OTJoiningConfiguration* _joiningConfiguration;
	OTControl* _otControl;
	NSMutableDictionary* _defaults;

}

@property (readonly) NSObject*<KCJoiningRequestSecretDelegate> secretDelegate;              //@synthesize secretDelegate=_secretDelegate - In the implementation block
@property (readonly) KCSRPClientContext * context;                                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long dsid;                                               //@synthesize dsid=_dsid - In the implementation block
@property (readonly) int state;                                                             //@synthesize state=_state - In the implementation block
@property (retain) NSString * piggy_uuid;                                                   //@synthesize piggy_uuid=_piggy_uuid - In the implementation block
@property (assign) unsigned long long piggy_version;                                        //@synthesize piggy_version=_piggy_version - In the implementation block
@property (assign) unsigned long long epoch;                                                //@synthesize epoch=_epoch - In the implementation block
@property (retain) NSData * challenge;                                                      //@synthesize challenge=_challenge - In the implementation block
@property (retain) NSData * salt;                                                           //@synthesize salt=_salt - In the implementation block
@property (nonatomic,retain) OTJoiningConfiguration * joiningConfiguration;                 //@synthesize joiningConfiguration=_joiningConfiguration - In the implementation block
@property (nonatomic,retain) OTControl * otControl;                                         //@synthesize otControl=_otControl - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaults;                                //@synthesize defaults=_defaults - In the implementation block
@property (readonly) KCAESGCMDuplexSession * session;                                       //@synthesize session=_session - In the implementation block
+(id)sessionWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)description;
-(NSData *)challenge;
-(int)state;
-(KCAESGCMDuplexSession *)session;
-(void)setConfiguration:(id)arg1 ;
-(KCSRPClientContext *)context;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(unsigned long long)dsid;
-(OTControl *)otControl;
-(void)setOtControl:(OTControl *)arg1 ;
-(NSMutableDictionary *)defaults;
-(void)setDefaults:(NSMutableDictionary *)arg1 ;
-(void)setChallenge:(NSData *)arg1 ;
-(BOOL)isDone;
-(NSData *)salt;
-(void)setSalt:(NSData *)arg1 ;
-(id)stateString;
-(void)setControlObject:(id)arg1 ;
-(OTJoiningConfiguration *)joiningConfiguration;
-(void)setJoiningConfiguration:(OTJoiningConfiguration *)arg1 ;
-(id)createUUID;
-(id)initialMessage:(id*)arg1 ;
-(BOOL)setupSession:(id*)arg1 ;
-(id)copyResponseForChallenge:(id)arg1 salt:(id)arg2 secret:(id)arg3 error:(id*)arg4 ;
-(id)copyResponseForSecret:(id)arg1 error:(id*)arg2 ;
-(id)handleChallengeData:(id)arg1 secret:(id)arg2 error:(id*)arg3 ;
-(id)handleChallenge:(id)arg1 secret:(id)arg2 error:(id*)arg3 ;
-(id)handleChallenge:(id)arg1 error:(id*)arg2 ;
-(id)handleVerification:(id)arg1 error:(id*)arg2 ;
-(id)processMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 rng:(ccrng_state*)arg3 error:(id*)arg4 ;
-(NSObject*<KCJoiningRequestSecretDelegate>)secretDelegate;
-(NSString *)piggy_uuid;
-(void)setPiggy_uuid:(NSString *)arg1 ;
-(unsigned long long)piggy_version;
-(void)setPiggy_version:(unsigned long long)arg1 ;
@end

