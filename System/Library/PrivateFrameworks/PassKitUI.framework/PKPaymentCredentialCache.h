/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentCredential, UIImage, PKPaymentPass, NSString;

@interface PKPaymentCredentialCache : NSObject {

	BOOL _isSelected;
	PKPaymentCredential* _credential;
	UIImage* _passSnapshot;
	PKPaymentPass* _paymentPass;
	NSString* _cellSubtitle;

}

@property (nonatomic,retain) PKPaymentCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) UIImage * passSnapshot;                        //@synthesize passSnapshot=_passSnapshot - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                               //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                   //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,copy) NSString * cellSubtitle;                         //@synthesize cellSubtitle=_cellSubtitle - In the implementation block
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(PKPaymentCredential *)credential;
-(void)setCredential:(PKPaymentCredential *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(UIImage *)passSnapshot;
-(void)setPassSnapshot:(UIImage *)arg1 ;
-(NSString *)cellSubtitle;
-(void)setCellSubtitle:(NSString *)arg1 ;
@end

