/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface ENPreferencesStore : NSObject {

	NSString* _pathname;
	NSMutableDictionary* _store;

}

@property (nonatomic,retain) NSString * pathname;                      //@synthesize pathname=_pathname - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
+(id)pathnameForStoreFilename:(id)arg1 ;
+(id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)arg1 ;
+(id)defaultPreferenceStore;
-(void)load;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllItems;
-(void)setStore:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)store;
-(void)save;
-(NSString *)pathname;
-(void)setPathname:(NSString *)arg1 ;
-(id)initWithStoreFilename:(id)arg1 ;
-(id)decodedObjectForKey:(id)arg1 ;
@end
