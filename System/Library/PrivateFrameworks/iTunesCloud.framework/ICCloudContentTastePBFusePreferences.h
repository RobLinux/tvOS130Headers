/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <iTunesCloud/NSCopying.h>

@class NSMutableArray;

@interface ICCloudContentTastePBFusePreferences : PBCodable <NSCopying> {

	NSMutableArray* _preferences;

}

@property (nonatomic,retain) NSMutableArray * preferences;              //@synthesize preferences=_preferences - In the implementation block
+(Class)preferencesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)preferences;
-(void)setPreferences:(NSMutableArray *)arg1 ;
-(void)addPreferences:(id)arg1 ;
-(void)clearPreferences;
-(unsigned long long)preferencesCount;
-(id)preferencesAtIndex:(unsigned long long)arg1 ;
@end

