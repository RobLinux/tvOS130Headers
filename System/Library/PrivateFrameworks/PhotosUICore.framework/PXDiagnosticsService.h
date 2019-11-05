/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, UIViewController;

@interface PXDiagnosticsService : NSObject {

	BOOL _canProvideConsoleDescription;
	BOOL _canProvideSettingsViewController;
	BOOL _canPerformAction;
	NSArray* _itemProviders;
	NSString* _consoleDescription;
	UIViewController* _settingsViewController;

}

@property (nonatomic,copy,readonly) NSArray * itemProviders;                             //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL canProvideConsoleDescription;                        //@synthesize canProvideConsoleDescription=_canProvideConsoleDescription - In the implementation block
@property (nonatomic,readonly) NSString * consoleDescription;                            //@synthesize consoleDescription=_consoleDescription - In the implementation block
@property (nonatomic,readonly) BOOL canProvideContextualViewController; 
@property (nonatomic,readonly) UIViewController * contextualViewController; 
@property (nonatomic,readonly) BOOL canProvideSettingsViewController;                    //@synthesize canProvideSettingsViewController=_canProvideSettingsViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * settingsViewController;                //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (nonatomic,readonly) BOOL canPerformAction;                                    //@synthesize canPerformAction=_canPerformAction - In the implementation block
-(id)init;
-(NSString *)title;
-(BOOL)canPerformAction;
-(void)performAction;
-(BOOL)canProvideConsoleDescription;
-(NSString *)consoleDescription;
-(BOOL)canProvideContextualViewController;
-(BOOL)canProvideSettingsViewController;
-(UIViewController *)settingsViewController;
-(id)initWithItemProviders:(id)arg1 ;
-(UIViewController *)contextualViewController;
-(NSArray *)itemProviders;
@end
