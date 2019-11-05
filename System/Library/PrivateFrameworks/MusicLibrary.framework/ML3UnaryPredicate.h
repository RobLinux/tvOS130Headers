/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate {

	ML3Predicate* _predicate;

}

@property (nonatomic,retain) ML3Predicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithPredicate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(ML3Predicate *)arg1 ;
-(ML3Predicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(id)databaseStatementParameters;
@end

