/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSGroupOperation.h>

@class CKKSKeychainView, NSBlockOperation, CKOperationGroup;

@interface CKKSHealTLKSharesOperation : CKKSGroupOperation {

	CKKSKeychainView* _ckks;
	NSBlockOperation* _cloudkitModifyOperationFinished;
	CKOperationGroup* _ckoperationGroup;

}

@property (retain) NSBlockOperation * cloudkitModifyOperationFinished;              //@synthesize cloudkitModifyOperationFinished=_cloudkitModifyOperationFinished - In the implementation block
@property (retain) CKOperationGroup * ckoperationGroup;                             //@synthesize ckoperationGroup=_ckoperationGroup - In the implementation block
@property (__weak) CKKSKeychainView * ckks;                                         //@synthesize ckks=_ckks - In the implementation block
-(void)groupStart;
-(CKKSKeychainView *)ckks;
-(void)setCkks:(CKKSKeychainView *)arg1 ;
-(id)initWithCKKSKeychainView:(id)arg1 ckoperationGroup:(id)arg2 ;
-(CKOperationGroup *)ckoperationGroup;
-(void)setCkoperationGroup:(CKOperationGroup *)arg1 ;
-(NSBlockOperation *)cloudkitModifyOperationFinished;
-(void)setCloudkitModifyOperationFinished:(NSBlockOperation *)arg1 ;
-(id)init;
-(void)cancel;
@end

