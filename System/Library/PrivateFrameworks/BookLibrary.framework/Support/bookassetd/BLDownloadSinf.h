/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:43:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/Support/bookassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BLDownloadSinf : NSObject {

	NSDictionary* _info;

}

@property (nonatomic,retain) NSDictionary * info;              //@synthesize info=_info - In the implementation block
@property (readonly) long long identifier; 
-(id)initWithDictionary:(id)arg1 ;
-(long long)identifier;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)dataForSinfDataKey:(id)arg1 ;
@end

