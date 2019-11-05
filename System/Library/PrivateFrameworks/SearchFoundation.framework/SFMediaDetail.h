/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFMediaDetail.h>
@class NSString, SFText, NSDictionary, NSData;


@protocol SFMediaDetail <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SFText * content; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(SFText *)content;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setContent:(id)arg1;
-(NSData *)jsonData;

@end

#import <SearchFoundation/NSSecureCoding.h>
#import <SearchFoundation/NSCopying.h>

@class NSString, SFText, NSDictionary, NSData;

@interface SFMediaDetail : NSObject <SFMediaDetail, NSSecureCoding, NSCopying> {

	NSString* _title;
	SFText* _content;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFText * content;                                       //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFText *)content;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContent:(SFText *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
@end

