/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SiriUITextContainerView, NSString;

@interface SRGuideDetailPhraseViewCell : SiriUIContentCollectionViewCell {

	SiriUITextContainerView* _textContainerView;

}

@property (nonatomic,copy) NSString * text; 
+(id)_font;
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
