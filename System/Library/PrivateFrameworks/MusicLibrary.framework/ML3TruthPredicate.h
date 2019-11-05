/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate {

	BOOL _truthValue;

}
+(BOOL)supportsSecureCoding;
+(id)truePredicate;
+(id)falsePredicate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_predicateString;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isTrueAlways;
-(BOOL)isFalseAlways;
@end

