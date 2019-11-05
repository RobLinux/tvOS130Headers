/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:17 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/PlugIns/PodcastsTVTopShelfExtension.appex/PodcastsTVTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsTVTopShelfExtension/IMCache.h>

@class NSString;

@interface IMBaseDiskCache : NSObject <IMCache> {

	NSString* _basePath;

}

@property (nonatomic,retain) NSString * basePath;                   //@synthesize basePath=_basePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initialize;
-(id)init;
-(void)clearCache;
-(BOOL)isEmpty;
-(void)removeItemForKey:(id)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(NSString *)basePath;
-(id)pathForKey:(id)arg1 ;
-(id)initWithBasePath:(id)arg1 ;
-(BOOL)hasItemForKey:(id)arg1 ;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(id)_allFiles;
@end

