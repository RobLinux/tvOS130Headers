/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/CKKSGroupOperation.h>
#import <securityd/OctagonStateTransitionOperationProtocol.h>

@class OTCuttlefishContext, NSString, NSData, OTOperationDependencies, NSOperation;

@interface OTVouchWithBottleOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol> {

	NSString* _intendedState;
	NSString* _nextState;
	OTCuttlefishContext* _cuttlefishContext;
	NSString* _bottleID;
	NSData* _entropy;
	NSString* _bottleSalt;
	NSData* _voucher;
	NSData* _voucherSig;
	OTOperationDependencies* _deps;
	NSOperation* _finishedOp;

}

@property (retain) OTOperationDependencies * deps;                             //@synthesize deps=_deps - In the implementation block
@property (retain) NSOperation * finishedOp;                                   //@synthesize finishedOp=_finishedOp - In the implementation block
@property (retain) NSString*<OctagonStateString> nextState;                    //@synthesize nextState=_nextState - In the implementation block
@property (__weak) OTCuttlefishContext * cuttlefishContext;                    //@synthesize cuttlefishContext=_cuttlefishContext - In the implementation block
@property (nonatomic,retain) NSString * bottleID;                              //@synthesize bottleID=_bottleID - In the implementation block
@property (nonatomic,retain) NSData * entropy;                                 //@synthesize entropy=_entropy - In the implementation block
@property (nonatomic,retain) NSString * bottleSalt;                            //@synthesize bottleSalt=_bottleSalt - In the implementation block
@property (nonatomic,retain) NSData * voucher;                                 //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,retain) NSData * voucherSig;                              //@synthesize voucherSig=_voucherSig - In the implementation block
@property (readonly) NSString*<OctagonStateString> intendedState;              //@synthesize intendedState=_intendedState - In the implementation block
-(void)groupStart;
-(NSString*<OctagonStateString>)intendedState;
-(NSOperation *)finishedOp;
-(void)setFinishedOp:(NSOperation *)arg1 ;
-(OTOperationDependencies *)deps;
-(void)setDeps:(OTOperationDependencies *)arg1 ;
-(OTCuttlefishContext *)cuttlefishContext;
-(void)setCuttlefishContext:(OTCuttlefishContext *)arg1 ;
-(id)initWithDependencies:(id)arg1 intendedState:(NSString*)arg2 errorState:(NSString*)arg3 bottleID:(id)arg4 entropy:(id)arg5 bottleSalt:(id)arg6 ;
-(void)proceedWithKeys:(id)arg1 tlkShares:(id)arg2 ;
-(NSString *)bottleSalt;
-(void)setBottleSalt:(NSString *)arg1 ;
-(NSData *)voucherSig;
-(void)setVoucherSig:(NSData *)arg1 ;
-(NSData *)voucher;
-(void)setVoucher:(NSData *)arg1 ;
-(NSString*<OctagonStateString>)nextState;
-(void)setNextState:(NSString*<OctagonStateString>)arg1 ;
-(void)setEntropy:(NSData *)arg1 ;
-(NSData *)entropy;
-(NSString *)bottleID;
-(void)setBottleID:(NSString *)arg1 ;
@end
