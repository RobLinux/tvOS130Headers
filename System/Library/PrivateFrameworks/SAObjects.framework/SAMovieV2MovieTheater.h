/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SALocalSearchBusiness2, NSArray;

@interface SAMovieV2MovieTheater : SADomainObject

@property (nonatomic,retain) SALocalSearchBusiness2 * business; 
@property (nonatomic,copy) NSArray * movies; 
+(id)movieTheater;
+(id)movieTheaterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)movies;
-(SALocalSearchBusiness2 *)business;
-(void)setBusiness:(SALocalSearchBusiness2 *)arg1 ;
-(id)encodedClassName;
-(void)setMovies:(NSArray *)arg1 ;
@end

