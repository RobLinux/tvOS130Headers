/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTimepoint.h>
#import <Navigation/MNJSONOutput.h>
#import <Navigation/NSSecureCoding.h>
#import <Navigation/NSCopying.h>

@class NSString;

@interface _MNTimepointAndTransportType : MNTimepoint <MNJSONOutput, NSSecureCoding, NSCopying> {

	int _transportType;

}

@property (assign,nonatomic) int transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(id)jsonDictionary;
-(id)initWithType:(long long)arg1 date:(id)arg2 transportType:(int)arg3 ;
@end
