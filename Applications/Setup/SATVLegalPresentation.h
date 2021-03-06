/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SATVLegalPresentationWarrantyDelegate;
@interface SATVLegalPresentation : NSObject {

	id<SATVLegalPresentationWarrantyDelegate> _warrantyDelegate;

}

@property (assign,nonatomic,__weak) id<SATVLegalPresentationWarrantyDelegate> warrantyDelegate;              //@synthesize warrantyDelegate=_warrantyDelegate - In the implementation block
+(id)sharedInstance;
-(void)displayLegalNoticeWithTitle:(id)arg1 terms:(id)arg2 navigationController:(id)arg3 ;
-(void)_warrantyAccepted;
-(id<SATVLegalPresentationWarrantyDelegate>)warrantyDelegate;
-(BOOL)needsWarrantyChallenge;
-(void)displayWarrantyChallengeWithTerms:(id)arg1 navigationController:(id)arg2 ;
-(void)setWarrantyDelegate:(id<SATVLegalPresentationWarrantyDelegate>)arg1 ;
@end

