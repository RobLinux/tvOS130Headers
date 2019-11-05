/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UISwitch, UILabel;

@interface MTPodcastPlaylistSheetHeaderView : UIView {

	UIView* _separator;
	UISwitch* _switch;
	UILabel* _title;
	BOOL _on;
	/*^block*/id _action;

}

@property (nonatomic,copy) id action;              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL on;              //@synthesize on=_on - In the implementation block
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)on;
-(void)layoutSubviews;
-(void)setOn:(BOOL)arg1 ;
-(void)buttonTapped:(id)arg1 ;
@end

