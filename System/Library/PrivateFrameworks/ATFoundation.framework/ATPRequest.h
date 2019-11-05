/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <ATFoundation/NSCopying.h>

@class NSString;

@interface ATPRequest : PBRequest <NSCopying> {

	NSString* _command;
	NSString* _dataClass;

}

@property (nonatomic,readonly) BOOL hasCommand; 
@property (nonatomic,retain) NSString * command;                //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasDataClass; 
@property (nonatomic,retain) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(BOOL)hasCommand;
-(NSString *)command;
-(NSString *)dataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(BOOL)hasDataClass;
@end

