/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIRestrictions : NSObject

@property (nonatomic,readonly) BOOL allowsShowingUndownloadedTVShows; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedMovies; 
@property (nonatomic,readonly) BOOL allowsDAUMetricCollection; 
+(id)sharedInstance;
-(BOOL)allowsShowingUndownloadedTVShows;
-(BOOL)allowsShowingUndownloadedMovies;
-(BOOL)allowsDAUMetricCollection;
@end

