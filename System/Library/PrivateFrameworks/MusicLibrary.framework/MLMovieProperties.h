/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/NSCopying.h>

@class NSMutableDictionary, NSArray, NSString;

@interface MLMovieProperties : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSArray * castMembers; 
@property (nonatomic,copy) NSString * copyrightWarning; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * producers; 
@property (nonatomic,copy) NSArray * screenwriters; 
@property (nonatomic,copy) NSString * studioName; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(id)initWithMoviePropertiesDictionary:(id)arg1 ;
-(id)copyMoviePropertiesDictionary;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)castMembers;
-(NSString *)copyrightWarning;
-(NSArray *)producers;
-(NSArray *)screenwriters;
-(void)setCastMembers:(NSArray *)arg1 ;
-(void)setCopyrightWarning:(NSString *)arg1 ;
-(void)setProducers:(NSArray *)arg1 ;
-(void)setScreenwriters:(NSArray *)arg1 ;
-(void)setStudioName:(NSString *)arg1 ;
-(NSString *)studioName;
@end
