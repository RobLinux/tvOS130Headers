/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, AFAnalyticsTurnBasedInstrumentationContext;

@interface SRStarkGatekeeperContactView : UIView {

	UILabel* _nameLabel;
	UIImageView* _photoImageView;
	UIImageView* _appIconImageView;
	AFAnalyticsTurnBasedInstrumentationContext* _currentTurnContext;

}

@property (getter=_nameLabel,nonatomic,readonly) UILabel * nameLabel;                                                                                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (getter=_photoImageView,nonatomic,readonly) UIImageView * photoImageView;                                                                                  //@synthesize photoImageView=_photoImageView - In the implementation block
@property (getter=_appIconImageView,nonatomic,readonly) UIImageView * appIconImageView;                                                                              //@synthesize appIconImageView=_appIconImageView - In the implementation block
@property (setter=_setCurrentTurnContext:,getter=_currentTurnContext,nonatomic,retain) AFAnalyticsTurnBasedInstrumentationContext * currentTurnContext;              //@synthesize currentTurnContext=_currentTurnContext - In the implementation block
+(id)associatedDataStore;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_nameLabel;
-(id)_photoImageView;
-(id)_appIconImageView;
-(void)updateWithSms:(id)arg1 currentTurnContext:(id)arg2 ;
-(void)updateWithMessageIntent:(id)arg1 currentTurnContext:(id)arg2 ;
-(void)_setCurrentTurnContext:(id)arg1 ;
-(void)_configureWithDisplayName:(id)arg1 contactPhoto:(id)arg2 contactPhotoURL:(id)arg3 contactIdentifier:(id)arg4 appImage:(id)arg5 nameComponents:(id)arg6 ;
-(id)initWithSms:(id)arg1 currentTurnContext:(id)arg2 ;
-(id)initWithMessageIntent:(id)arg1 currentTurnContext:(id)arg2 ;
-(void)_configureContactImage:(id)arg1 contactPhoto:(id)arg2 contactPhotoURL:(id)arg3 contactIdentifier:(id)arg4 nameComponents:(id)arg5 ;
-(id)_currentTurnContext;
@end

