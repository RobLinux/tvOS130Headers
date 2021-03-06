/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, TVSettingsLocationItem, NSMutableDictionary, NSFormatter;

@interface TVSettingsLocationServicesFacade : NSObject {

	NSArray* _applicationItems;
	NSArray* _systemServiceItems;
	TVSettingsLocationItem* _timeZoneItem;
	TVSettingsLocationItem* _pineBoardItem;
	NSMutableDictionary* _items;

}

@property (nonatomic,copy) NSMutableDictionary * items;                             //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * applicationItems;                              //@synthesize applicationItems=_applicationItems - In the implementation block
@property (nonatomic,copy) NSArray * systemServiceItems;                            //@synthesize systemServiceItems=_systemServiceItems - In the implementation block
@property (assign,nonatomic) BOOL locationServicesEnabled; 
@property (nonatomic,readonly) TVSettingsLocationItem * timeZoneItem;               //@synthesize timeZoneItem=_timeZoneItem - In the implementation block
@property (nonatomic,readonly) TVSettingsLocationItem * pineBoardItem;              //@synthesize pineBoardItem=_pineBoardItem - In the implementation block
@property (nonatomic,readonly) NSFormatter * accessTypeFormatter; 
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)items;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(void)setLocationServicesEnabled:(BOOL)arg1 ;
-(BOOL)locationServicesEnabled;
-(NSFormatter *)accessTypeFormatter;
-(NSArray *)systemServiceItems;
-(id)itemForBundleID:(id)arg1 ;
-(TVSettingsLocationItem *)timeZoneItem;
-(TVSettingsLocationItem *)pineBoardItem;
-(void)_updateItems:(BOOL)arg1 ;
-(NSArray *)applicationItems;
-(id)_whitelistedSystemServices;
-(id)_hiddenSystemServices;
-(void)setSystemServiceItems:(NSArray *)arg1 ;
-(void)setApplicationItems:(NSArray *)arg1 ;
@end

