//
//  DZNPhotoPickerControllerConstants.h
//  DZNPhotoPickerController
//  https://github.com/dzenbot/DZNPhotoPickerController
//
//  Created by Ignacio Romero Zurbuchen on 10/5/13.
//  Copyright (c) 2014 DZN Labs. All rights reserved.
//  Licence: MIT-Licence
//

UIKIT_EXTERN NSString *const DZNPhotoPickerControllerCropMode;              // An NSString (i.e. square, circular)
UIKIT_EXTERN NSString *const DZNPhotoPickerControllerPhotoMetadata;         // an NSDictionary containing metadata from a captured photo

UIKIT_EXTERN NSString *const DZNPhotoPickerDidFinishPickingNotification;    // The notification key used when photo picked.

@interface DZNPhotoPickerControllerConstants : NSObject
@end

/*
 * Types of supported photo services
 */
typedef NS_OPTIONS(NSUInteger, DZNPhotoPickerControllerService) {
    DZNPhotoPickerControllerService500px = (1 << 0),            // 500px                                    http://500px.com/developers/
    DZNPhotoPickerControllerServiceFlickr = (1 << 1),           // Flickr                                   http://www.flickr.com/services/api/
    DZNPhotoPickerControllerServiceInstagram = (1 << 2),        // Instagram                                http://instagram.com/developer/
    DZNPhotoPickerControllerServiceGoogleImages = (1 << 3),     // Google Images                            https://developers.google.com/image-search/
    DZNPhotoPickerControllerServiceBingImages = (1 << 4),       // Bing Images                              http://datamarket.azure.com/dataset/bing/search/
    DZNPhotoPickerControllerServiceYahooImages = (1 << 5),      // Yahoo Images                             http://developer.yahoo.com/boss/search/
    DZNPhotoPickerControllerServicePanoramio = (1 << 6),        // Panoramio                                http://www.panoramio.com/api/
    DZNPhotoPickerControllerServiceDribbble = (1 << 7)          // Dribbble                                 http://dribbble.com/api/
};

/*
 * Types of Creative Commons licences.
 * Defined in http://creativecommons.org/licenses/
 *
 * Additional license info:
 * 500px: http://500px.com/creativecommons/
 * Flickr: http://flickr.com/creativecommons/
 */
typedef NS_OPTIONS(NSUInteger, DZNPhotoPickerControllerCCLicense) {
    DZNPhotoPickerControllerCCLicenseBY_ZERO = -1,              // No Rights Reserved                       http://creativecommons.org/about/cc0
    DZNPhotoPickerControllerCCLicenseBY_ALL = 0,                // All CC Reserved Attributions
    DZNPhotoPickerControllerCCLicenseBY = (1 << 0),             // All Rights Reserved Attribution          http://creativecommons.org/licenses/by/4.0
    DZNPhotoPickerControllerCCLicenseBY_SA = (1 << 1),          // Attribution-ShareAlike                   http://creativecommons.org/licenses/by-sa/4.0
    DZNPhotoPickerControllerCCLicenseBY_ND = (1 << 2),          // Attribution-NoDerivs                     http://creativecommons.org/licenses/by-nd/4.0
    DZNPhotoPickerControllerCCLicenseBY_NC = (1 << 3),          // Attribution-NonCommercial                http://creativecommons.org/licenses/by-nc/4.0
    DZNPhotoPickerControllerCCLicenseBY_NC_SA = (1 << 4),       // Attribution-NonCommercial-ShareAlike     http://creativecommons.org/licenses/by-nc-sa/4.0
    DZNPhotoPickerControllerCCLicenseBY_NC_ND = (1 << 5)        // Attribution-NonCommercial-NoDerivs       http://creativecommons.org/licenses/by-nc-nd/4.0
};

/*
 * Types of supported cropping modes.
 */
typedef NS_ENUM(NSInteger, DZNPhotoEditViewControllerCropMode) {
    DZNPhotoEditViewControllerCropModeNone = -1,
    DZNPhotoEditViewControllerCropModeSquare = 0,
    DZNPhotoEditViewControllerCropModeCircular
};

/*
 * Types of photo service subscription (i.e. Free, Paid)
 */
typedef NS_ENUM(NSInteger, DZNPhotoPickerControllerSubscription) {
    DZNPhotoPickerControllerSubscriptionFree,
    DZNPhotoPickerControllerSubscriptionPaid
};

/*
 * Returns a photo service name string.
 *
 * @param service The specified service type.
 * @returns The photo service name.
 */
UIKIT_EXTERN NSString *NSStringFromService(DZNPhotoPickerControllerService service);

/*
 * Returns a list of photo service name strings.
 *
 * @param services The bitmap of service types.
 * @returns The list of photo service names.
 */
UIKIT_EXTERN NSArray *NSArrayFromServices(DZNPhotoPickerControllerService services);

/*
 * Returns a photo service type from name.
 *
 * @param name The specified service name.
 * @returns The photo service type.
 */
UIKIT_EXTERN DZNPhotoPickerControllerService DZNPhotoServiceFromName(NSString *name);

/*
 * Returns the first photo service type from a bitmask of services.
 *
 * @param services The bitmask of services.
 * @returns The photo service type.
 */
UIKIT_EXTERN DZNPhotoPickerControllerService DZNFirstPhotoServiceFromPhotoServices(DZNPhotoPickerControllerService services);

