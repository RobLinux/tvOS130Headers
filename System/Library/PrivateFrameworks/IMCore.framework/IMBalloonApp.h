/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPlugIn;
@class NSBundle, NSNumber, NSString;

@interface IMBalloonApp : NSObject {

	BOOL _isBetaPlugin;
	BOOL _isLaunchProhibited;
	BOOL _isStickerPackOnly;
	BOOL _showInBrowser;
	BOOL _shouldBalloonHideAppIcon;
	BOOL _shouldHideAppSwitcher;
	BOOL _canSendDataPayloads;
	BOOL _pluginLoaded;
	Class _browserClass;
	Class _dataSourceClass;
	Class _customTypingIndicatorLayerClass;
	Class _bubbleClass;
	Class _entryClass;
	NSBundle* _appBundle;
	NSBundle* _pluginBundle;
	NSNumber* _itemID;
	NSString* _browserDisplayName;
	NSString* _identifier;
	NSString* _version;
	id<PKPlugIn> _plugin;
	unsigned long long _presentationContexts;

}

@property (assign,nonatomic) BOOL canSendDataPayloads;                             //@synthesize canSendDataPayloads=_canSendDataPayloads - In the implementation block
@property (assign,nonatomic) BOOL isLaunchProhibited;                              //@synthesize isLaunchProhibited=_isLaunchProhibited - In the implementation block
@property (assign,nonatomic) BOOL showInBrowser;                                   //@synthesize showInBrowser=_showInBrowser - In the implementation block
@property (assign,nonatomic) BOOL isEnabled; 
@property (assign,nonatomic) BOOL shouldBalloonHideAppIcon;                        //@synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldHideAppSwitcher;                           //@synthesize shouldHideAppSwitcher=_shouldHideAppSwitcher - In the implementation block
@property (nonatomic,retain) Class browserClass;                                   //@synthesize browserClass=_browserClass - In the implementation block
@property (nonatomic,retain) Class bubbleClass;                                    //@synthesize bubbleClass=_bubbleClass - In the implementation block
@property (nonatomic,retain) Class customTypingIndicatorLayerClass;                //@synthesize customTypingIndicatorLayerClass=_customTypingIndicatorLayerClass - In the implementation block
@property (nonatomic,retain) Class dataSourceClass;                                //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,retain) Class entryClass;                                     //@synthesize entryClass=_entryClass - In the implementation block
@property (nonatomic,retain) NSBundle * appBundle;                                 //@synthesize appBundle=_appBundle - In the implementation block
@property (nonatomic,retain) NSBundle * pluginBundle;                              //@synthesize pluginBundle=_pluginBundle - In the implementation block
@property (nonatomic,retain) NSNumber * itemID;                                    //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * browserDisplayName;                        //@synthesize browserDisplayName=_browserDisplayName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin;                                  //@synthesize plugin=_plugin - In the implementation block
@property (assign,nonatomic) unsigned long long presentationContexts;              //@synthesize presentationContexts=_presentationContexts - In the implementation block
@property (assign,nonatomic) BOOL pluginLoaded;                                    //@synthesize pluginLoaded=_pluginLoaded - In the implementation block
@property (assign,nonatomic) BOOL isEnabledUnremovableApp; 
@property (nonatomic,readonly) BOOL isBetaPlugin;                                  //@synthesize isBetaPlugin=_isBetaPlugin - In the implementation block
@property (nonatomic,readonly) BOOL isStickerPackOnly;                             //@synthesize isStickerPackOnly=_isStickerPackOnly - In the implementation block
@property (nonatomic,readonly) BOOL showableInBrowser; 
@property (nonatomic,readonly) NSString * version;                                 //@synthesize version=_version - In the implementation block
+(id)appWithPluginBundle:(id)arg1 ;
+(id)appWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
+(id)appWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
+(unsigned long long)presentationContextsForInfoPlistArray:(id)arg1 isStickerPackOnly:(BOOL)arg2 ;
+(id)_unremovableDisabledApps;
+(void)_setUnremovableDisabledApps:(id)arg1 ;
+(id)appWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(NSString *)identifier;
-(NSString *)version;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSNumber *)itemID;
-(BOOL)isLaunchProhibited;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
-(id<PKPlugIn>)plugin;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setDataSourceClass:(Class)arg1 ;
-(Class)dataSourceClass;
-(NSString *)browserDisplayName;
-(void)setPluginLoaded:(BOOL)arg1 ;
-(BOOL)showInBrowser;
-(void)setShowInBrowser:(BOOL)arg1 ;
-(void)setBubbleClass:(Class)arg1 ;
-(void)setBrowserClass:(Class)arg1 ;
-(void)setCustomTypingIndicatorLayerClass:(Class)arg1 ;
-(void)setEntryClass:(Class)arg1 ;
-(Class)bubbleClass;
-(BOOL)showableInBrowser;
-(BOOL)shouldHideAppSwitcher;
-(BOOL)isStickerPackOnly;
-(Class)browserClass;
-(Class)customTypingIndicatorLayerClass;
-(Class)entryClass;
-(NSBundle *)appBundle;
-(NSBundle *)pluginBundle;
-(BOOL)pluginLoaded;
-(unsigned long long)presentationContexts;
-(BOOL)isBetaPlugin;
-(void)setBrowserDisplayName:(NSString *)arg1 ;
-(void)setPresentationContexts:(unsigned long long)arg1 ;
-(BOOL)shouldBalloonHideAppIcon;
-(BOOL)canSendDataPayloads;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)setCanSendDataPayloads:(BOOL)arg1 ;
-(void)setShouldBalloonHideAppIcon:(BOOL)arg1 ;
-(void)setShouldHideAppSwitcher:(BOOL)arg1 ;
-(BOOL)isEnabledUnremovableApp;
-(void)setIsEnabledUnremovableApp:(BOOL)arg1 ;
-(void)_loadBundle;
-(void)setIsLaunchProhibited:(BOOL)arg1 ;
-(void)setAppBundle:(NSBundle *)arg1 ;
-(void)setPluginBundle:(NSBundle *)arg1 ;
@end

