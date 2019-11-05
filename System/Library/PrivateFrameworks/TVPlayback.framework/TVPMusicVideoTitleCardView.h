/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class TVPFloatingButton, NSString, UIControl;

@interface TVPMusicVideoTitleCardView : UIView {

	TVPFloatingButton* _addButton;
	BOOL _showAddButton;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL showAddButton;                   //@synthesize showAddButton=_showAddButton - In the implementation block
@property (nonatomic,readonly) UIControl * addButton; 
+(void)_limitMaxX:(double)arg1 forView:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(UIControl *)addButton;
-(BOOL)showAddButton;
-(void)setShowAddButton:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 showAddButton:(BOOL)arg3 ;
@end

