/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFCameraAdjustmentsSerialization : NSObject
+(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
+(id)deserializedAdjustmentsFromData:(id)arg1 error:(id*)arg2 ;
+(id)serializedAdjustments:(id)arg1 error:(id*)arg2 ;
+(id)serializedDictionaryForFilters:(id)arg1 portraitMetadata:(id)arg2 error:(id*)arg3 ;
+(BOOL)deserializeDictionary:(id)arg1 toFilters:(id*)arg2 portraitMetadata:(id*)arg3 error:(id*)arg4 ;
+(id)_errorWithMessage:(id)arg1 code:(long long)arg2 ;
@end

