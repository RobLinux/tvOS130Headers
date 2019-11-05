/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class NSArray, LAContext, NSDictionary, TKClientToken, NSString, NSNumber;

@interface TKClientTokenSession : NSObject {

	long long _connectionIdentifier;
	NSArray* _advertisedItems;
	BOOL _authenticateWhenNeeded;
	BOOL __testing_AuthenticateInternally;
	LAContext* _LAContext;
	NSDictionary* _parameters;
	TKClientToken* _token;
	NSString* _slotName;
	NSNumber* _sessionID;

}

@property (nonatomic,readonly) NSNumber * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) LAContext * LAContext;                           //@synthesize LAContext=_LAContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                       //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) TKClientToken * token;                           //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL authenticateWhenNeeded;                       //@synthesize authenticateWhenNeeded=_authenticateWhenNeeded - In the implementation block
@property (nonatomic,readonly) NSArray * keys; 
@property (nonatomic,readonly) NSArray * certificates; 
@property (nonatomic,readonly) NSArray * identities; 
@property (nonatomic,readonly) NSString * slotName;                             //@synthesize slotName=_slotName - In the implementation block
@property (assign,nonatomic) BOOL _testing_AuthenticateInternally;              //@synthesize _testing_AuthenticateInternally=__testing_AuthenticateInternally - In the implementation block
-(void)dealloc;
-(TKClientToken *)token;
-(NSArray *)keys;
-(NSArray *)certificates;
-(NSNumber *)sessionID;
-(void)terminate;
-(NSString *)slotName;
-(BOOL)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id*)arg3 ;
-(id)createObjectWithAttributes:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObject:(id)arg1 error:(id*)arg2 ;
-(NSArray *)identities;
-(NSDictionary *)parameters;
-(LAContext *)LAContext;
-(id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(id)objectForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)withError:(id*)arg1 accessControl:(SecAccessControlRef)arg2 invoke:(/*^block*/id)arg3 ;
-(BOOL)ensureSessionWithClient:(id)arg1 connectionIdentifier:(long long)arg2 error:(id*)arg3 ;
-(BOOL)authenticateWhenNeeded;
-(BOOL)_testing_AuthenticateInternally;
-(id)advertisedItems;
-(id)itemsOfClass:(id)arg1 ;
-(id)initWithTokenID:(id)arg1 LAContext:(id)arg2 error:(id*)arg3 ;
-(void)setAuthenticateWhenNeeded:(BOOL)arg1 ;
-(void)set_testing_AuthenticateInternally:(BOOL)arg1 ;
@end

