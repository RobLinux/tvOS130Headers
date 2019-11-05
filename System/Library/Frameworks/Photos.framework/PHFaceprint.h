/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface PHFaceprint : NSObject {

	long long _faceprintVersion;
	NSData* _faceprintData;

}

@property (nonatomic,readonly) long long faceprintVersion;                 //@synthesize faceprintVersion=_faceprintVersion - In the implementation block
@property (nonatomic,retain,readonly) NSData * faceprintData;              //@synthesize faceprintData=_faceprintData - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2 ;
-(long long)faceprintVersion;
-(NSData *)faceprintData;
@end

