/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSString* _itemURL;
	NSArray* _categories;
	NSArray* _artworkDictionary;

}

@property (nonatomic,retain) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                       //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                        //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * itemURL;                       //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSArray * categories;                     //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSArray * artworkDictionary;              //@synthesize artworkDictionary=_artworkDictionary - In the implementation block
-(id)dictionary;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)artworkDictionary;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)itemURL;
-(void)setItemURL:(NSString *)arg1 ;
-(void)setArtworkDictionary:(NSArray *)arg1 ;
@end

