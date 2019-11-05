/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel, NSString;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	_CertInfoActionButton* _actionButton;
	_CertInfoGradientLabel* _trustedLabel;
	BOOL _trusted;

}

@property (nonatomic,__weak,readonly) _CertInfoActionButton * actionButton; 
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,copy) NSString * trustTitle; 
@property (nonatomic,copy) NSString * trustSubtitle; 
@property (assign,getter=isTrusted,nonatomic) BOOL trusted;                              //@synthesize trusted=_trusted - In the implementation block
-(void)setExpired:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isTrusted;
-(_CertInfoActionButton *)actionButton;
-(void)layoutSubviews;
-(id)_titleLabel;
-(id)_subtitleLabel;
-(double)rowHeight;
-(void)setTrusted:(BOOL)arg1 ;
-(NSString *)trustTitle;
-(void)setTrustTitle:(NSString *)arg1 ;
-(NSString *)trustSubtitle;
-(void)setTrustSubtitle:(NSString *)arg1 ;
-(id)_trustedLabel;
-(void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_layoutSubviewsWithActionButtonSize:(CGSize)arg1 ;
@end

