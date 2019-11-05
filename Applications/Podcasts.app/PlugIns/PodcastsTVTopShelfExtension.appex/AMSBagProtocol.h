/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:16 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/PlugIns/PodcastsTVTopShelfExtension.appex/PodcastsTVTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol AMSBagProtocol <NSObject>
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@required
-(id)boolForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(id)integerForKey:(id)arg1;
-(id)doubleForKey:(id)arg1;
-(id)URLForKey:(id)arg1;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSString *)profile;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1;

@end

