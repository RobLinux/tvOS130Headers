/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSGroupOperation.h>

@class CKKSKeychainView, CKOperationGroup;

@interface CKKSFixupLocalReloadOperation : CKKSGroupOperation {

	CKKSKeychainView* _ckks;
	CKOperationGroup* _group;

}

@property (retain) CKOperationGroup * group;              //@synthesize group=_group - In the implementation block
@property (__weak) CKKSKeychainView * ckks;               //@synthesize ckks=_ckks - In the implementation block
-(void)groupStart;
-(CKKSKeychainView *)ckks;
-(void)setCkks:(CKKSKeychainView *)arg1 ;
-(id)initWithCKKSKeychainView:(id)arg1 ckoperationGroup:(id)arg2 ;
-(id)description;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(CKOperationGroup *)group;
@end

